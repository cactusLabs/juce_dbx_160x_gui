/*
  ==============================================================================

    InOutComponent.cpp
    Created: 27 Nov 2023 6:17:01pm
    Author:  Ruggles

  ==============================================================================
*/

#include <JuceHeader.h>
#include "InOutComponent.h"

const int border = 10;

//==============================================================================
InOutComponent::InOutComponent()
{
    addAndMakeVisible(inOut);
}

InOutComponent::~InOutComponent()
{
}

void InOutComponent::paint (juce::Graphics& g)
{
    inOut.setBounds(0, 0, getLocalBounds().getWidth() - border, getLocalBounds().getHeight() - border);
    inOut.centreWithSize((getLocalBounds().getWidth()), (getLocalBounds().getHeight() / 3));
}

void InOutComponent::resized()
{
    inOut.setBounds(0, 0, getLocalBounds().getWidth() - border, getLocalBounds().getHeight() - border);
    inOut.centreWithSize((getLocalBounds().getWidth()), (getLocalBounds().getHeight() / 3));
}
