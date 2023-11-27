#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (880, 80);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);

    addAndMakeVisible(layout);
    addAndMakeVisible(logo);
    addAndMakeVisible(model);

    logo.setBounds(layout.logo);
    model.setBounds(layout.model);
}

void MainComponent::resized()
{
    layout.setBounds(getBounds());    
    logo.setBounds(layout.logo);
    model.setBounds(layout.model);
}
