# Brain MRI Viewer

A small cross-platform desktop application built with **Qt 6 and C++** for viewing brain MRI images.

This is a personal learning project that I am using to learn **Qt, C++, and desktop GUI development**. I wanted to build something practical while learning how Qt's widgets, layouts, signals and slots, and image handling work.

## What It Does

The application currently allows you to:

- Open brain MRI images from your computer
- Display images at their original resolution
- Scroll horizontally and vertically through large images
- Resize the application window while keeping the image at full resolution
- Use a simple graphical interface built with Qt Widgets

The project is currently focused on learning Qt rather than serving as a clinical or diagnostic tool.

## Technologies

- **C++17**
- **Qt 6**
- **Qt Widgets**
- **CMake**
- **Git / GitHub**

## What I Am Learning

This project is helping me practice:

- Creating desktop GUIs with Qt Designer
- Working with Qt Widgets and layouts
- Understanding parent-child widget relationships
- Using `QScrollArea` for large images
- Loading and displaying images with `QPixmap`
- Connecting buttons to functionality with signals and slots
- Managing Qt projects with CMake
- Using Git and GitHub for version control

## Current Interface

The application currently consists of:

```text
Main Window
├── Open Image button
└── Scrollable image viewer
    └── MRI image
