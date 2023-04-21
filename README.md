# qt_ros_demo
a demo for ros2 and qt5 in ubuntu22.04 ros2 humble

进入ros2_qt_demo 文件夹，创建build文件夹
```shell
ros2_ws01/src/ros2_qt_demo$ tree
.
├── build
├── CMakeLists.txt
├── include
│   ├── mainwindow.h
│   └── rclcomm.h
├── package.xml
├── resource
├── src
│   ├── main.cpp
│   ├── mainwindow.cpp
│   └── rclcomm.cpp
└── ui
    └── mainwindow.ui

5 directories, 8 files
```
编译
```shell
cd build/
cmake ..
make
```

运行
```shell
ros2_ws01/src/ros2_qt_demo/build$ ./ros2_qt_demo
```
