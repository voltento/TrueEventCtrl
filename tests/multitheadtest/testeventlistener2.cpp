#include "testeventlistener2.h"
#include <QDebug>

TestEventListener2::TestEventListener2()
{

}

TestEventListener2::~TestEventListener2()
{

}

void TestEventListener2::abatractTestListener(Event *event)
{
    qDebug() << "Abstract method";
}