#include "IUIFactory.h"
#include "GTKUIFactory.h"
#include "QTUIFactory.h"

static IUIFactory::eUIType _sUIType = IUIFactory::kUITGTK;
static IUIFactory * _sUIFactory = nullptr;

IUIFactory* IUIFactory::getUIFactory() {
	if ( _sUIFactory == nullptr ) {
		switch ( _sUIType ) {
		case kUITGTK:
			_sUIFactory = new GTKUIFactory();
			break;
		case kUITQT:
			_sUIFactory = new QTUIFactory();
			break;
		}
	}
	return _sUIFactory;
}

void IUIFactory::initializeUIFactory( eUIType uitype ) {
	_sUIType = uitype;
}
