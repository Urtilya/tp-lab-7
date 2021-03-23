// Copyright 2021 Ilya Urtyukov
#ifndef INCLUDE_CELL_H_
#define INCLUDE_CELL_H_

#include "common.h"
#include "object.h"

class Ocean;

class Cell {
  friend class Ocean;
 private:
  Pair crd;
  Object* object;
  Ocean* ocean;
  bool isEmpty_;

 public:
  Cell();
  void init(Pair crd, Ocean* ocean);
  Pair getCrd() const;
  Object* getObject() const;
  Ocean* getOcean() const;
  void setObject(Object*);
  void killMe();
  bool isEmpty() const;
  void setIsEmpty(bool value);
};
#endif  // INCLUDE_CELL_H_