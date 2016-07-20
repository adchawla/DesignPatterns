#include "GTKApplicationWindow.h"
#include "GTKStatusBarWindow.h"
#include "GTKToolboxWindow.h"
#include "GTKButton.h"

void setupToolbox( IToolboxWindow * toolboxWindow );
void setupShapeButtons( IToolboxWindow * toolboxWindow );
void setupPenButtons( IToolboxWindow * toolboxWindow );
void setupEraserButton( IToolboxWindow * toolboxWindow );

int main() {
	IApplicationWindow * appWindow = new GTKApplicationWindow( 300, 400 );
	IToolboxWindow * toolboxWindow = new GTKToolboxWindow( 50, 400 );
	IStatusBarWindow * statusboxWindow = new GTKStatusBarWindow( 50, 400 );
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
	IButton * rectButton = new GTKButton( "Draw Rect" );
	IButton * circleButton = new GTKButton( "Draw Circle" );
	IButton * polyButton = new GTKButton( "Draw Polygon" );
	toolboxWindow->addButton( rectButton, -1 );
	toolboxWindow->addButton( circleButton, -1 );
	toolboxWindow->addButton( polyButton, -1 );
}

void setupPenButtons( IToolboxWindow * toolboxWindow ) {
	IButton * markerButton = new GTKButton( "Draw With Marker" );
	IButton * ballpenButton = new GTKButton( "Draw With Ball Pen" );
	IButton * pencilButton = new GTKButton( "Draw With Pencil" );
	toolboxWindow->addButton( markerButton, -1 );
	toolboxWindow->addButton( ballpenButton, -1 );
	toolboxWindow->addButton( pencilButton, -1 );
}

void setupEraserButton( IToolboxWindow * toolboxWindow ) {
	IButton * eraserButton = new GTKButton( "Eraser" );
	toolboxWindow->addButton( eraserButton, -1 );
}

