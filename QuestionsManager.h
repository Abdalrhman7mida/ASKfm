
#ifndef QUESTIONSMANAGER_H
#define QUESTIONSMANAGER_H

#include <string>


/**
  * class QuestionsManager
  * 
  */

class QuestionsManager
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  QuestionsManager();

  /**
   * Empty Destructor
   */
  virtual ~QuestionsManager();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void loadDatabase()
  {
  }


  /**
   * @return undef
   * @param  user
   */
  undef getUserToQuestions(User user)
  {
  }


  /**
   * @return undef
   * @param  user
   */
  undef getUserFromQuestions(User user)
  {
  }


  /**
   * @param  user
   */
  void printUserToQuestions(User user)
  {
  }


  /**
   * @param  user
   */
  void printUserFromQuestions(User user)
  {
  }


  /**
   * @return int
   * @param  user
   */
  int readQuestionIdAny(User user)
  {
  }


  /**
   * @return int
   * @param  user
   */
  int readQuestionIdThread(User user)
  {
  }


  /**
   * @param  user
   */
  void answerQuestion(User user)
  {
  }


  /**
   * @param  user
   */
  void deleteQuestion(User user)
  {
  }


  /**
   * @param  user
   * @param  toUserPair
   */
  void askQuestion(User user, undef toUserPair)
  {
  }


  /**
   */
  void listFeed()
  {
  }


  /**
   */
  void updateDatabase()
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

  map<int, vector<int>> questionid_questionidsThread_map;
  map<int, Question> questionid_questionobject_map;
  int lastId;
  Question new_attribute;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of questionid_questionidsThread_map
   * @param value the new value of questionid_questionidsThread_map
   */
  void setQuestionid_questionidsThread_map(map<int, vector<int>> value)
  {
    questionid_questionidsThread_map = value;
  }

  /**
   * Get the value of questionid_questionidsThread_map
   * @return the value of questionid_questionidsThread_map
   */
  map<int, vector<int>> getQuestionid_questionidsThread_map()
  {
    return questionid_questionidsThread_map;
  }

  /**
   * Set the value of questionid_questionobject_map
   * @param value the new value of questionid_questionobject_map
   */
  void setQuestionid_questionobject_map(map<int, Question> value)
  {
    questionid_questionobject_map = value;
  }

  /**
   * Get the value of questionid_questionobject_map
   * @return the value of questionid_questionobject_map
   */
  map<int, Question> getQuestionid_questionobject_map()
  {
    return questionid_questionobject_map;
  }

  /**
   * Set the value of lastId
   * @param value the new value of lastId
   */
  void setLastId(int value)
  {
    lastId = value;
  }

  /**
   * Get the value of lastId
   * @return the value of lastId
   */
  int getLastId()
  {
    return lastId;
  }

  /**
   * Set the value of new_attribute
   * @param value the new value of new_attribute
   */
  void setNew_attribute(Question value)
  {
    new_attribute = value;
  }

  /**
   * Get the value of new_attribute
   * @return the value of new_attribute
   */
  Question getNew_attribute()
  {
    return new_attribute;
  }

  void initAttributes();

};

#endif // QUESTIONSMANAGER_H
