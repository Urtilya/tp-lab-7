// Copyright 2021 Ilya Urtyukov
#ifndef INCLUDE_OBJECT_H_
#define INCLUDE_OBJECT_H_

#include "common.h"

#define STONE_N (char)254
#define EMPTY_CELL '~'
#define PREY_N 'f'
#define PREDATOR_N 'S'

enum class ObjType { STONE, PREY, PREDATOR };

class Cell;

class Object {
 protected:
  Cell* cell;
  ObjType obj_type;

 public:
  virtual ~Object() = default;
  virtual void live() = 0;
  void setCell(Cell*);
  Cell* getCell() const;
  ObjType getObjType();
};
#endif  // INCLUDE_OBJECT_H_