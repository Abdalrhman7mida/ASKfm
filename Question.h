
#ifndef QUESTION_H
#define QUESTION_H

#include <string>


/**
  * class Question
  * 
  */

class Question
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Question();

  /**
   * Empty Destructor
   */
  virtual ~Question();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  line
   */
   Question(std::string line)
  {
  }


  /**
   * @return std::string
   */
  std::string toString()
  {
  }


  /**
   */
  void printToQuestion()
  {
  }


  /**
   */
  void printFromQuestion()
  {
  }


  /**
   */
  void printFeedQuestion()
  {
  }


  /**
   * @param  answerText
   */
  void setAnswerText(std::string answerText)
  {
  }


  /**
   * @return int
   */
  int getFromUserId()
  {
  }


  /**
   * @param  fromUserId
   */
  void setFromUserId(int fromUserId)
  {
  }


  /**
   * @return int
   */
  int getIsAnonymousQuestions()
  {
  }


  /**
   * @param  isAnonymousQuestions
   */
  void setIsAnonymousQuestions(int isAnonymousQuestions)
  {
  }


  /**
   * @return int
   */
  int getParentQuestionId()
  {
  }


  /**
   * @param  parentQuestionId
   */
  void setParentQuestionId(int parentQuestionId)
  {
  }


  /**
   * @return int
   */
  int getQuestionId()
  {
  }


  /**
   * @param  questionId
   */
  void setQuestionId(int questionId)
  {
  }


  /**
   * @return std::string
   */
  std::string getQuestionText()
  {
  }


  /**
   * @param  questionText
   */
  void setQuestionText(std::string questionText)
  {
  }


  /**
   * @return int
   */
  int getToUserId()
  {
  }


  /**
   * @param  toUserId
   */
  void setToUserId(int toUserId)
  {
  }

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  int questionId;
  int parentQuestionId;
  int fromUserId;
  int toUserId;
  int isAnonymousQuestions;
  std::string questionText;
  std::string answerText;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of questionId
   * @param value the new value of questionId
   */
  void setQuestionId(int value)
  {
    questionId = value;
  }

  /**
   * Get the value of questionId
   * @return the value of questionId
   */
  int getQuestionId()
  {
    return questionId;
  }

  /**
   * Set the value of parentQuestionId
   * @param value the new value of parentQuestionId
   */
  void setParentQuestionId(int value)
  {
    parentQuestionId = value;
  }

  /**
   * Get the value of parentQuestionId
   * @return the value of parentQuestionId
   */
  int getParentQuestionId()
  {
    return parentQuestionId;
  }

  /**
   * Set the value of fromUserId
   * @param value the new value of fromUserId
   */
  void setFromUserId(int value)
  {
    fromUserId = value;
  }

  /**
   * Get the value of fromUserId
   * @return the value of fromUserId
   */
  int getFromUserId()
  {
    return fromUserId;
  }

  /**
   * Set the value of toUserId
   * @param value the new value of toUserId
   */
  void setToUserId(int value)
  {
    toUserId = value;
  }

  /**
   * Get the value of toUserId
   * @return the value of toUserId
   */
  int getToUserId()
  {
    return toUserId;
  }

  /**
   * Set the value of isAnonymousQuestions
   * @param value the new value of isAnonymousQuestions
   */
  void setIsAnonymousQuestions(int value)
  {
    isAnonymousQuestions = value;
  }

  /**
   * Get the value of isAnonymousQuestions
   * @return the value of isAnonymousQuestions
   */
  int getIsAnonymousQuestions()
  {
    return isAnonymousQuestions;
  }

  /**
   * Set the value of questionText
   * @param value the new value of questionText
   */
  void setQuestionText(std::string value)
  {
    questionText = value;
  }

  /**
   * Get the value of questionText
   * @return the value of questionText
   */
  std::string getQuestionText()
  {
    return questionText;
  }

  /**
   * Set the value of answerText
   * @param value the new value of answerText
   */
  void setAnswerText(std::string value)
  {
    answerText = value;
  }

  /**
   * Get the value of answerText
   * @return the value of answerText
   */
  std::string getAnswerText()
  {
    return answerText;
  }


  /**
   * @return std::string
   */
  std::string getAnswerText()
  {
  }

  void initAttributes();

};

#endif // QUESTION_H
