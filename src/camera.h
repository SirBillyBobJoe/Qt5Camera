
#ifndef CAMERA_H
#define CAMERA_H

#include <QCamera>
#include <QCameraImageCapture>
#include <QMediaRecorder>
#include <QScopedPointer>

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "graphicsview.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Camera; }
QT_END_NAMESPACE

class Camera : public QMainWindow
{
    Q_OBJECT

public:
    Camera();

private slots:


    void setCamera(const QCameraInfo &cameraInfo);

    void startCamera();
    void stopCamera();

    void toggleLock();
    void takeImage();
    void displayCaptureError(int, QCameraImageCapture::Error, const QString &errorString);

    void configureCaptureSettings();
    void configureImageSettings();

    void displayCameraError();

    void updateCameraDevice(QAction *action);

    void updateCameraState(QCamera::State);
    void updateCaptureMode();


    void processCapturedImage(int requestId, const QImage &img);

    void displayViewfinder();
    void displayCapturedImage();

    void readyForCapture(bool ready);
    void imageSaved(int id, const QString &fileName);

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::Camera *ui;


    QScopedPointer<QCamera> m_camera;
    QScopedPointer<QCameraImageCapture> m_imageCapture;


    QImageEncoderSettings m_imageSettings;
    QAudioEncoderSettings m_audioSettings;

    QString m_videoContainerFormat;
    bool m_isCapturingImage = false;
    bool m_applicationExiting = false;
};

#endif
