/*
  ==============================================================================

    LogoComponent.cpp
    Created: 26 Nov 2023 5:43:44pm
    Author:  Ruggles

  ==============================================================================
*/

#include <JuceHeader.h>
#include "LogoComponent.h"

//==============================================================================
LogoComponent::LogoComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

LogoComponent::~LogoComponent()
{
}

void LogoComponent::paint (juce::Graphics& g)
{
    g.setColour(juce::Colours::white);
    juce::Font testFont("Segoe UI Black", "Regular", 35.0f);
    g.setFont(testFont);
    g.drawText("J.dbx", getLocalBounds(), juce::Justification::centredBottom);
}

void LogoComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
