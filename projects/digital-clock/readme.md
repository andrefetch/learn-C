# Digital Clock

### Description
A digital clock that prints the current time in `HH:MM:SS` and updates itself once every second, overwriting the same line in the terminal instead of spamming a new one. It keeps running until you stop it with `Ctrl + C`.

### What I've Learned
I practiced using `time.h` to get the current time, first with `time(&rawtime)` to grab the raw seconds since the epoch (Jan 1 1970), then `localtime()` to convert those seconds into a `struct tm` broken down into hours, minutes, and seconds. Since `localtime()` hands back a pointer, I used the arrow operator `->` to dereference it and pull out `tm_hour`, `tm_min`, and `tm_sec` in one step instead of writing `(*timePtr).tm_hour`.

I also learned about the carriage return `\r`, which sends the cursor back to the start of the line so the next print overwrites the old time rather than pushing it down. Because `stdout` is line buffered and `\r` is not a newline, nothing would actually show up until the buffer filled, so I needed `fflush(stdout)` to force it out every tick. Finally I used `sleep(1)` from `unistd.h` to pause the loop for a second between updates so it doesn't burn the CPU redrawing constantly.

### Code
- [main.c](main.c)
