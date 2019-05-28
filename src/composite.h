#pragma once

#include <string>

#include "iterator.h"

class HTMLCompositeTag;

// Component klasa.
class HTMLComponent{
public:
   // Vaš kod
};

// List klasa 
class HTMLTag : public HTMLComponent{
public:
     // Vaš kod
private:
   std::string mTagName;
   std::string mBody;
};

// List klasa 
class HTMLText : public HTMLComponent{
public:
   // Vaš kod  
private:
   std::string mBody;
};

// Composite klasa
class HTMLCompositeTag : public HTMLComponent{
public: 
    // Vaš kod   
private:
    // Vaš kod.
};


class Iterator
{
public:
    Iterator();
    virtual ~Iterator();

    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isDone() = 0;
    virtual HTMLComponent& currentItem() const = 0;
};


class CompositeIterator : public Iterator{
public:
   // Vaš kod
private:
    // Vaš kod
};

