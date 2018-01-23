[![Build Status](https://travis-ci.org/ilyayunkin/timer.svg)](https://travis-ci.org/ilyayunkin/timer)

# timer
Simple application for measuring time intervals in shell (cmd/bash) scripts.

## How to use
* Run "timer begin" - App will create a file with a timestamp.
* Run your process.
* Run "timer end" - App will read the timestamp from the file and calculate a difference which is approximately an execution time of your process.

## example
For windows (exe extension):
```
timer.exe begin
ping ya.ru
timer.exe end
```
You will get output:
```
diff 0h 0m 15s (or 15.000000 s)
```
