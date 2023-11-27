/*
  ==============================================================================

    LayoutComponent.cpp
    Created: 26 Nov 2023 6:25:03pm
    Author:  Ruggles

  ==============================================================================
*/

#include <JuceHeader.h>
#include "LayoutComponent.h"

//==============================================================================
LayoutComponent::LayoutComponent()
{
}

LayoutComponent::~LayoutComponent()
{
}

void LayoutComponent::paint(juce::Graphics& g)
{
    /* --- Layout --- */
    juce::Rectangle<int> totalArea = getLocalBounds();
    juce::Rectangle<int> lhs_area = totalArea.removeFromLeft(totalArea.getWidth() / 2);
    juce::Rectangle<int> rhs_area = totalArea.removeFromRight(totalArea.getWidth());

    //g.setColour(juce::Colours::red);
    //g.drawRect(lhs_area);
    //g.drawRect(rhs_area);

    // Left Hand Side (LHS)
    juce::Rectangle<int> lhs_areaA = lhs_area.removeFromLeft(lhs_area.getWidth() / 4);
    juce::Rectangle<int> lhs_areaB = lhs_area.removeFromLeft(lhs_area.getWidth() / 5);
    juce::Rectangle<int> lhs_areaC = lhs_area.removeFromLeft(lhs_area.getWidth() / 4);
    juce::Rectangle<int> lhs_areaD = lhs_area.removeFromLeft(lhs_area.getWidth() / 3);
    juce::Rectangle<int> lhs_areaE = lhs_area.removeFromLeft(lhs_area.getWidth() / 2);
    juce::Rectangle<int> lhs_areaF = lhs_area.removeFromLeft(lhs_area.getWidth() / 1);

    g.setColour(juce::Colours::green);
    g.drawRect(lhs_areaA);
    g.setColour(juce::Colours::yellow);
    g.drawRect(lhs_areaB);
    g.setColour(juce::Colours::purple);
    g.drawRect(lhs_areaC);
    g.setColour(juce::Colours::magenta);
    g.drawRect(lhs_areaD);
    g.setColour(juce::Colours::wheat);
    g.drawRect(lhs_areaE);
    g.setColour(juce::Colours::white);
    g.drawRect(lhs_areaF);

    // LHS sub areas
    juce::Rectangle<int> lhs_areaA_bot = lhs_areaA.removeFromBottom(lhs_areaA.getHeight() / 2);
    juce::Rectangle<int> lhs_areaA_top = lhs_areaA.removeFromBottom(lhs_areaA.getHeight());

    g.setColour(juce::Colours::blue);
    g.drawRect(lhs_areaA_top);
    g.setColour(juce::Colours::antiquewhite);
    g.drawRect(lhs_areaA_bot);

    // Right Hand Side (RHS)
    juce::Rectangle<int> rhs_areaA = rhs_area.removeFromLeft(rhs_area.getWidth() / 7);
    juce::Rectangle<int> rhs_areaB = rhs_area.removeFromLeft(rhs_area.getWidth() / 6);
    juce::Rectangle<int> rhs_areaC = rhs_area.removeFromLeft(rhs_area.getWidth());

    g.setColour(juce::Colours::tomato);
    g.drawRect(rhs_areaA);
    g.setColour(juce::Colours::coral);
    g.drawRect(rhs_areaB);
    g.setColour(juce::Colours::gold);
    g.drawRect(rhs_areaC);

    // Based on the above layout, define areas
    area = totalArea;
    logo = lhs_areaA_top;
    model = lhs_areaA_bot;
}

void LayoutComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
}