// Copyright 2024 bhipp
// Josue Ambriz Ruiz

#include "multiplechoicequestion.h"
#include <iostream>

using std::cout;
using std::endl;

namespace csce240_program5 {

void MultipleChoiceQuestion::CleanUp() {
  delete[] choices_;
  delete[] is_correct_;
  choices_ = nullptr;
  is_correct_ = nullptr;
  num_choices_ = 0;
}

// CopyFrom method
void MultipleChoiceQuestion::CopyFrom(const MultipleChoiceQuestion& other) {
  if (this != &other) {
    Question::SetQuestion(other.GetQuestion());
    num_choices_ = other.num_choices_;

    if (num_choices_ > 0) {
      choices_ = new string[num_choices_];
      is_correct_ = new bool[num_choices_];
      for (int i = 0; i < num_choices_; ++i) {
        choices_[i] = other.choices_[i];
        is_correct_[i] = other.is_correct_[i];
      }
    } else {
      choices_ = nullptr;
      is_correct_ = nullptr;
    }
  }
}

// Constructor
MultipleChoiceQuestion::MultipleChoiceQuestion(
    string question, int num_choices, string* choices, bool* correct)
    : Question(question), num_choices_(num_choices), choices_(nullptr),
    is_correct_(nullptr) {
  if (num_choices > 0) {
    choices_ = new string[num_choices];
    is_correct_ = new bool[num_choices];

    for (int i = 0; i < num_choices; ++i) {
      choices_[i] = (choices != nullptr) ? choices[i] : "";
      is_correct_[i] = (correct != nullptr) ? correct[i] : true;
    }
  }
}

// Copy Constructor
MultipleChoiceQuestion::MultipleChoiceQuestion
(const MultipleChoiceQuestion& other)
    : Question(other.GetQuestion()), num_choices_(0), choices_(nullptr),
    is_correct_(nullptr) {
  CopyFrom(other);
}

// Assignment Operator
MultipleChoiceQuestion& MultipleChoiceQuestion::operator=
(const MultipleChoiceQuestion& other) {
  if (this != &other) {
    CleanUp();
    CopyFrom(other);
  }
  return *this;
}

// Destructor
MultipleChoiceQuestion::~MultipleChoiceQuestion() {
  CleanUp();
}

// Accessor & Mutator
int MultipleChoiceQuestion::GetNumberOfChoices() const {
  return num_choices_;
}

void MultipleChoiceQuestion::SetAnswerChoices
(int num_choices, string* choices, bool* correct) {
  CleanUp();
  num_choices_ = num_choices;

  if (num_choices > 0) {
    choices_ = new string[num_choices];
    is_correct_ = new bool[num_choices];

    for (int i = 0; i < num_choices; ++i) {
      choices_[i] = (choices != nullptr) ? choices[i] : "";
      is_correct_[i] = (correct != nullptr) ? correct[i] : true;
    }
  }
}

// Print
void MultipleChoiceQuestion::Print(bool showCorrectness) const {
  cout << "Question: " << GetQuestion() << endl;

  cout << "Answer Choices:" << endl;

  for (int i = 0; i < num_choices_; i++) {
    cout << choices_[i];
    if (showCorrectness) {
      cout << (is_correct_[i] ? " - correct" : " - incorrect");
    }
    cout << endl;
  }
}

}  // namespace csce240_program5
