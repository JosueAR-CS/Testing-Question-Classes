// Copyright 2024 bhipp
// Josue Ambriz Ruiz

#ifndef MULTIPLECHOICEQUESTION_H_
#define MULTIPLECHOICEQUESTION_H_

#include <string>
#include "question.h"

using std::string;

namespace csce240_program5 {

// Inheritance
class MultipleChoiceQuestion : public Question {
 public:
  // Constructor
  explicit MultipleChoiceQuestion(string = "?", int = 0, string* = nullptr,
                                  bool* = nullptr);

  MultipleChoiceQuestion(const MultipleChoiceQuestion&);

  MultipleChoiceQuestion& operator=(const MultipleChoiceQuestion&);

  ~MultipleChoiceQuestion();

  int GetNumberOfChoices() const;

  void SetAnswerChoices(int, string*, bool*);

  void Print(bool) const;

  // Private data members
 private:
  int num_choices_;
  string* choices_;
  bool* is_correct_;

  void CleanUp();
  void CopyFrom(const MultipleChoiceQuestion&);
};

}  // namespace csce240_program5

#endif  // MULTIPLECHOICEQUESTION_H_
