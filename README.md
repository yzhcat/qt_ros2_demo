# qt_ros2_demo
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

ros2_ws01/src/ros2_qt_demo/build$
```shell
./ros2_qt_demo
```
# preview
![2023-04-21_18-38](https://user-images.githubusercontent.com/33952798/233620873-a91bf43f-4caf-431a-b08d-591d4bc732b7.png)

![2023-04-21_18-44](https://user-images.githubusercontent.com/33952798/233621037-e2d03b61-28e2-4547-8826-80d29f70fa01.png)
