/*
  ==============================================================================

    ModelComponent.cpp
    Created: 27 Nov 2023 11:24:47am
    Author:  Ruggles

  ==============================================================================
*/

#include <JuceHeader.h>
#include "ModelComponent.h"

//==============================================================================
ModelComponent::ModelComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

ModelComponent::~ModelComponent()
{
}

void ModelComponent::paint (juce::Graphics& g)
{
    g.setColour(juce::Colours::white);
    juce::Font testFont("Segoe UI Black", "Regular", 32.0f);
    g.setFont(testFont);
    g.drawText("160X", getLocalBounds(), juce::Justification::centredTop);
}

void ModelComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
