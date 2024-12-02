// Copyright 2024 bhipp
// Josue Ambriz Ruiz

#ifndef SHORTANSWERQUESTION_H_
#define SHORTANSWERQUESTION_H_

#include <string>
#include "question.h"

namespace csce240_program5 {

// Child of the Question
class ShortAnswerQuestion : public Question {
 public:
  // Explicit constructor that allows the question and answer to be initialized
  explicit ShortAnswerQuestion(std::string q = "?", std::string ans = "");

  std::string GetAnswer() const;

  void SetAnswer(std::string ans);

  void Print(bool show_answer) const;

  // Private string data member
 private:
  std::string answer_;
};

}  // namespace csce240_program5

#endif  // SHORTANSWERQUESTION_H_
