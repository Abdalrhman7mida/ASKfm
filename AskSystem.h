
#ifndef ASKSYSTEM_H
#define ASKSYSTEM_H

#include <string>


/**
  * class AskSystem
  * 
  */

class AskSystem
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  AskSystem();

  /**
   * Empty Destructor
   */
  virtual ~AskSystem();

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
  void run()
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

  UsersManager usersManager;
  QuestionsManager questionsManager;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of usersManager
   * @param value the new value of usersManager
   */
  void setUsersManager(UsersManager value)
  {
    usersManager = value;
  }

  /**
   * Get the value of usersManager
   * @return the value of usersManager
   */
  UsersManager getUsersManager()
  {
    return usersManager;
  }

  /**
   * Set the value of questionsManager
   * @param value the new value of questionsManager
   */
  void setQuestionsManager(QuestionsManager value)
  {
    questionsManager = value;
  }

  /**
   * Get the value of questionsManager
   * @return the value of questionsManager
   */
  QuestionsManager getQuestionsManager()
  {
    return questionsManager;
  }


  /**
   * @param  fillUserQuestions
   */
  void loadDatabase(bool fillUserQuestions = false)
  {
  }


  /**
   */
  void resetCurrentUserQuestions()
  {
  }

  void initAttributes();

};

#endif // ASKSYSTEM_H
