// Copyright 2024 bhipp
// Josue Ambriz Ruiz

#include "shortanswerquestion.h"
#include <iostream>

namespace csce240_program5 {

ShortAnswerQuestion::ShortAnswerQuestion(std::string q, std::string ans)
    : Question(q), answer_(ans) {
}

// Accessor and mutator
std::string ShortAnswerQuestion::GetAnswer() const {
  return answer_;
}

void ShortAnswerQuestion::SetAnswer(std::string ans) {
  answer_ = ans;
}

void ShortAnswerQuestion::Print(bool show_answer) const {
  // Output should "Question: "
  Question::Print();
  if (show_answer) {
    // Output should be "Correct Answer: "
    std::cout << "Correct Answer: " << answer_ << std::endl;
  }
}

}  // namespace csce240_program5
