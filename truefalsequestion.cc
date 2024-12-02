// Copyright 2024 bhipp
// Josue Ambriz Ruiz

#include "truefalsequestion.h"
#include <iostream>

namespace csce240_program5 {

TrueFalseQuestion::TrueFalseQuestion(std::string q, bool ans)
    : Question(q), answer_(ans) {
}

// // Accessor and Mutator
bool TrueFalseQuestion::GetAnswer() const {
  return answer_;
}

void TrueFalseQuestion::SetAnswer(bool ans) {
  answer_ = ans;
}

// Print function that takes a bool parameter and outputs
void TrueFalseQuestion::Print(bool show_answer) const {
  Question::Print();
  if (show_answer) {
    std::cout << "Correct Answer: " << (answer_ ? "true" : "false")
              << std::endl;
  }
}

}  // namespace csce240_program5
