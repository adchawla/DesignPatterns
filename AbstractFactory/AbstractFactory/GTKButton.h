#pragma once
#include "IButton.h"
#include <string>

class GTKButton :
	public IButton
{
public:
	GTKButton( const std::string & title );
	virtual ~GTKButton();

	virtual void setTitle( const std::string & ) override;


	virtual void render() override;

protected:
	std::string	mTitle;
};

