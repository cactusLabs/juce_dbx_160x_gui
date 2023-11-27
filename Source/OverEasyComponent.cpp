/*
  ==============================================================================

    OverEasyComponent.cpp
    Created: 27 Nov 2023 5:13:47pm
    Author:  Ruggles

  ==============================================================================
*/

#include <JuceHeader.h>
#include "OverEasyComponent.h"

const int border = 10;

//==============================================================================
OverEasyComponent::OverEasyComponent()
{
    addAndMakeVisible(overEasy);
}

OverEasyComponent::~OverEasyComponent()
{

}

void OverEasyComponent::paint (juce::Graphics& g)
{
    overEasy.setBounds(0, 0, getLocalBounds().getWidth() - border, getLocalBounds().getHeight() - border);
    overEasy.centreWithSize((getLocalBounds().getWidth()), (getLocalBounds().getHeight() / 3));
}

void OverEasyComponent::resized()
{
    overEasy.setBounds(0, 0, getLocalBounds().getWidth() - border, getLocalBounds().getHeight() - border);
    overEasy.centreWithSize((getLocalBounds().getWidth()), (getLocalBounds().getHeight() / 3));
}
