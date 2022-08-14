#ifndef SONPAGEMANAGER_H
#define SONPAGEMANAGER_H

#include <QApplication>
#include "adbprocess.h"
#include "textexplainer.h"
#include "devInfo/sp_dpichanger.h"
#include "devInfo/sp_wmsize.h"
#include "activator/sp_activator.h"
#include "apps/sp_installer.h"
#include "apps/sp_permissiongroups.h"
#include "apps/sp_permissions.h"
#include "apps/sp_packages.h"
#include "apps/sp_features.h"
#include "apps/sp_libraries.h"
#include "devControl/sp_devcontrol_power.h"
#include "devControl/btnemulator.h"
#include "recovery/sp_recovery.h"
#include "advanced/sp_customize_cmd.h"


class sonPageManager
{
public:
    sonPageManager();
    ~sonPageManager();

    adbProcess *process;
    textExplainer *explainer;


    QWidget *selector(QWidget *parent, QString parentName, int key , device dev);

private:

    QWidget* createSonPageFor_devInfo(QWidget *parent, int key, device dev);
    sp_activator* createSonPageFor_activator(QWidget *parent, int key, device dev);
    QWidget* createSonPageFor_apps(QWidget *parent, int key, device dev);
    QWidget* createSonPageFor_devControl(QWidget *parent, int key, device dev);
    QWidget* createSonPageFor_recovery(QWidget *parent, int key, device dev);
    QWidget* createSonPageFor_advanced(QWidget *parent, int key, device dev);
};

#endif // SONPAGEMANAGER_H
