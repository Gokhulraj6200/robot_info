# Robot_info Package

## Table of Contents

- [Introduction](#introduction)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Results](#result)

## Introduction <a name="introduction"></a>
The robot_info package is created by ROS nodes and is a part of a project aimed at creating a user-friendly graphical interface for robot teleoperation and monitoring. This package provides a ROS node that publishes essential information about the robot. It serves as the backend support for a GUI application, enabling users to interact and control robot's more efficiently.

## Prerequisites <a name="prerequisites"></a>

- ROS
- c++ compiler
- Linux
  
## Installation <a name="installation"></a>

1\. clone this repository inside your `catkin_ws/src` directory:
```bash
cd ~/catkin_ws/src
git clone https://github.com/Gokhulraj6200/robot_info.git
```

2\. Compile the package:
```bash
cd ~/catkin_ws
catkin_make
```

3\. Source the ROS environment:
```bash
source devel/setup.bash
```

## Usage <a name="usage"></a>
1\. start the ROS core by using the following code:
```bash
source devel/setup.bash
```

2\. Launch the robot info node:
```bash
rosrun robot_info agv_robot_info_node
```

3\. subscribe to 'robot_info' topic in terminal_2:
```bash
rostopic echo /robot_info
```

## Results <a name="result"></a>
Robot moving forward:

data_field_01: "robot_description: Mir100"\
data_field_02: "serial_number: 567A359"\
data_field_03: "ip_address: 169.254.5.180"\
data_field_04: "firmware_version: 3.5.8"\
data_field_05: "maximum_payload: 100 Kg"\
data_field_06: "hydraulic_oil_temperature: 45C"\
data_field_07: "hydraulic_oil_tank_fill_level: 100%"\
data_field_08: "hydraulic_oil_pressure: 250 bar"\
