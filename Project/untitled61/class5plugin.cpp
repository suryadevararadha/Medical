#include "class5.h"
#include "class5plugin.h"

#include <QtPlugin>

Class5Plugin::Class5Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Class5Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool Class5Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Class5Plugin::createWidget(QWidget *parent)
{
    return new Class5(parent);
}

QString Class5Plugin::name() const
{
    return QLatin1String("Class5");
}

QString Class5Plugin::group() const
{
    return QLatin1String("");
}

QIcon Class5Plugin::icon() const
{
    return QIcon();
}

QString Class5Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Class5Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Class5Plugin::isContainer() const
{
    return false;
}

QString Class5Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Class5\" name=\"class5\">\n</widget>\n");
}

QString Class5Plugin::includeFile() const
{
    return QLatin1String("class5.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(class5plugin, Class5Plugin)
#endif // QT_VERSION < 0x050000
