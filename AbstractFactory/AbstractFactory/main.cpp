#include "IUIFactory.h"
#include "IApplicationWindow.h"
#include "IToolboxWindow.h"
#include "IStatusBarWindow.h"
#include "IButton.h"

void setupToolbox( IToolboxWindow * toolboxWindow );
void setupShapeButtons( IToolboxWindow * toolboxWindow );
void setupPenButtons( IToolboxWindow * toolboxWindow );
void setupEraserButton( IToolboxWindow * toolboxWindow );

int main(int argc, char ** argv) {

	// logic to switch ui kit
	IUIFactory::eUIType uitype = IUIFactory::kUITGTK;
	if ( argc > 1 ) {
		if ( strcmp( argv[ 1 ], "qt" ) == 0 ) {
			uitype = IUIFactory::kUITQT;
		}
	}
	IUIFactory::initializeUIFactory( uitype );

	IUIFactory * uifactory = IUIFactory::getUIFactory();

	IApplicationWindow * appWindow = uifactory->createApplicationWindow( 300, 400 );
	IToolboxWindow * toolboxWindow = uifactory->createToolboxWindow(50, 400);
	IStatusBarWindow * statusboxWindow = uifactory->createStatusBarWindow( 50, 400 );

	appWindow->setStatusBarWindow( statusboxWindow );
	appWindow->setToolboxWindow( toolboxWindow );
	statusboxWindow->setMessage( "CAPS: ON" );
	setupToolbox( toolboxWindow );
	appWindow->render();
}


void setupToolbox( IToolboxWindow * toolboxWindow ) {
	setupShapeButtons( toolboxWindow );
	setupPenButtons( toolboxWindow );
	setupEraserButton( toolboxWindow );
}


void setupShapeButtons( IToolboxWindow * toolboxWindow ) {
	IUIFactory * uifactory = IUIFactory::getUIFactory();
	IButton * rectButton = uifactory->createButton( "Draw Rect" );
	IButton * circleButton = uifactory->createButton( "Draw Circle" );
	IButton * polyButton = uifactory->createButton( "Draw Polygon" );
	toolboxWindow->addButton( rectButton, -1 );
	toolboxWindow->addButton( circleButton, -1 );
	toolboxWindow->addButton( polyButton, -1 );
}

void setupPenButtons( IToolboxWindow * toolboxWindow ) {
	IUIFactory * uifactory = IUIFactory::getUIFactory();
	IButton * markerButton = uifactory->createButton( "Draw With Marker" );
	IButton * ballpenButton = uifactory->createButton( "Draw With Ball Pen" );
	IButton * pencilButton = uifactory->createButton( "Draw With Pencil" );
	toolboxWindow->addButton( markerButton, -1 );
	toolboxWindow->addButton( ballpenButton, -1 );
	toolboxWindow->addButton( pencilButton, -1 );
}

void setupEraserButton( IToolboxWindow * toolboxWindow ) {
	IUIFactory * uifactory = IUIFactory::getUIFactory();
	IButton * eraserButton = uifactory->createButton( "Eraser" );
	toolboxWindow->addButton( eraserButton, -1 );
}

