# Car Counter app.

This app can be used to count the amount of traffic on a street. Its available as a ubuntu snap and can therefore be installed on every newer (<2014) machine. Install instructions can be found below. You can test the app with a video instead of webcam if you like.

[![Build Status](https://travis-ci.org/vigilatore/traffic_monitor.svg?branch=master)](https://travis-ci.org/vigilatore/traffic_monitor)

[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)  

[![Build Status](https://img.shields.io/badge/Code%20Style-Google%20C%2B%2B-green.svg)](https://google.github.io/styleguide/cppguide.html)

[![Snap Status](https://build.snapcraft.io/badge/vigilatore/traffic_monitor.svg)](https://build.snapcraft.io/user/vigilatore/traffic_monitor)

[![codecov](https://codecov.io/gh/vigilatore/traffic_monitor/branch/master/graph/badge.svg)](https://codecov.io/gh/vigilatore/traffic_monitor)

[![Maintenance](https://img.shields.io/maintenance/yes/2017.svg)](http://carlosgomes.ch)

[![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat)](https://github.com/gocarlos/python-ubuntu-snap-app-example/issues)


## Build instructions:

```bash
# clone app
git clone git@github.com/vigilatore/traffic_monitor.git
cd traffic_monitor
mkdir build
cd build
cmake ..
make
./traffic_monitor
```

## Install instructions:

```bash
sudo snap install traffic-monitor --devmode # Currently in devmode, will be corrected soon.
```

A test video:
https://www.youtube.com/watch?v=gP5PupjD2po
