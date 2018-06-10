#pragma once


#include <list>

#include "TLibCommon/TComPic.h"


class TTraPictureBuffer {
protected:
  std::list<TComPic*> m_list;


public:
  // Default constructor
  TTraPictureBuffer();

  // Virtual destructor
  virtual ~TTraPictureBuffer();

  // Get a reference to the internal list
        std::list<TComPic*>& list();

  // Get a const reference to the internal list
  const std::list<TComPic*>& list() const;

  // Find a TComPic by POC
  TComPic* findByPOC(Int poc);

  // Get or make a TComPic from the picture buffer
  TComPic& getUnusedPicture();

  // Clear buffer
  Void clear();
};