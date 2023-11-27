/*
  ==============================================================================

    BypassComponent.cpp
    Created: 27 Nov 2023 5:55:30pm
    Author:  Ruggles

  ==============================================================================
*/

#include <JuceHeader.h>
#include "BypassComponent.h"

const int border = 10;

//==============================================================================
BypassComponent::BypassComponent()
{
    addAndMakeVisible(bypass);
}

BypassComponent::~BypassComponent()
{
}

void BypassComponent::paint (juce::Graphics& g)
{
    bypass.setBounds(0, 0, getLocalBounds().getWidth() - border, getLocalBounds().getHeight() - border);
    bypass.centreWithSize((getLocalBounds().getWidth()), (getLocalBounds().getHeight() / 3));
}

void BypassComponent::resized()
{
    bypass.setBounds(0, 0, getLocalBounds().getWidth() - border, getLocalBounds().getHeight() - border);
    bypass.centreWithSize((getLocalBounds().getWidth()), (getLocalBounds().getHeight() / 3));
}
