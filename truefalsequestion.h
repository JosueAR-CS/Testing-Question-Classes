// Copyright 2024 bhipp
// Josue Ambriz Ruiz

#ifndef TRUEFALSEQUESTION_H_
#define TRUEFALSEQUESTION_H_

#include <string>
#include "question.h"

namespace csce240_program5 {

// Inheritance
class TrueFalseQuestion : public Question {
 public:
  // Explicit Constructor
  explicit TrueFalseQuestion(std::string q = "?", bool ans = true);

  bool GetAnswer() const;

  void SetAnswer(bool ans);

  void Print(bool show_answer) const;

  // Private bool data member
 private:
  bool answer_;
};

}  // namespace csce240_program5

#endif  // TRUEFALSEQUESTION_H_
