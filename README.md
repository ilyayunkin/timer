[![Build Status](https://travis-ci.org/ilyayunkin/timer.svg)](https://travis-ci.org/ilyayunkin/timer)
[![Build status](https://ci.appveyor.com/api/projects/status/wjbkkgahxgsuyc0p?svg=true)](https://ci.appveyor.com/project/ilyayunkin/timer)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/0452fe28d2ab4b3aa0c71dc2ec051cc4)](https://www.codacy.com/app/ilya.yunkin/timer?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=ilyayunkin/timer&amp;utm_campaign=Badge_Grade)

[Latest release for Windows](https://github.com/ilyayunkin/timer/releases/latest)    
[Latest build for Windows](https://ci.appveyor.com/project/ilyayunkin/timer/build/artifacts)

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
