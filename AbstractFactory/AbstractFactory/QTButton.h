#pragma once
#include "IButton.h"
#include <string>

class QTButton :
	public IButton
{
public:
	QTButton( const std::string & title );
	virtual ~QTButton();

	virtual void setTitle( const std::string & ) override;


	virtual void render() override;

protected:
	std::string	mTitle;
};

