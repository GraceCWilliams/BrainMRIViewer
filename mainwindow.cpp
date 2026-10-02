#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QPixmap>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->imageLabel->setAlignment(Qt::AlignCenter);
    ui->imageLabel->setText("No image loaded");

    ui->scrollArea->setWidgetResizable(false);

    ui->openImageButton->setSizePolicy(
        QSizePolicy::Fixed, QSizePolicy::Fixed
        );

    ui->verticalLayout->setAlignment(
        ui->openImageButton, Qt::AlignHCenter
        );

    connect(ui->openImageButton, &QPushButton::clicked, this, [this]() {
        QString fileName = QFileDialog::getOpenFileName(
            this, "Open Image", "",
            "Images (*.png *.jpg *.jpeg *.bmp)"
            );

        if (fileName.isEmpty())
            return;

        QPixmap image(fileName);

        if (image.isNull()) {
            ui->imageLabel->setText("Could not load image");
            return;
        }

        ui->scrollAreaWidgetContents->resize(image.size());
        ui->imageLabel->resize(image.size());
        ui->imageLabel->setPixmap(image);
    });
}
MainWindow::~MainWindow()
{
    delete ui;
}