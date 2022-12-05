
#ifndef USER_H
#define USER_H

#include <string>


/**
  * class User
  * 
  */

class User
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  User();

  /**
   * Empty Destructor
   */
  virtual ~User();

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
   User(std::string line)
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
  void Print()
  {
  }


  /**
   * @param  toQuestions
   */
  void resetToQuestions(undef toQuestions)
  {
  }


  /**
   * @param  toQuestions
   */
  void resetFromQuestions(undef toQuestions)
  {
  }


  /**
   * @param  userName
   * @param  id
   */
  void readUser(std::string userName, int id)
  {
  }


  /**
   * @return int
   */
  int isAllowAnonymousQuestions()
  {
  }


  /**
   * @param  allowAnonymousQuestions
   */
  void setAllowAnonymousQuestions(int allowAnonymousQuestions)
  {
  }


  /**
   * @return std::string
   */
  std::string getEmail()
  {
  }


  /**
   * @param  email
   */
  void setEmail(std::string email)
  {
  }


  /**
   * @return std::string
   */
  std::string getName()
  {
  }


  /**
   * @param  name
   */
  void setName(std::string name)
  {
  }


  /**
   * @return std::string
   */
  std::string getPassword()
  {
  }


  /**
   * @param  password
   */
  void setPassword(std::string password)
  {
  }


  /**
   * @return int
   */
  int getUserId()
  {
  }


  /**
   * @param  userId
   */
  void setUserId(int userId)
  {
  }


  /**
   * @param  userName
   */
  void setUserName(std::string userName)
  {
  }


  /**
   * @return map<int, vector<int>>
   */
  map<int, vector<int>> getQuestionidQuestionidsTheadToMap()
  {
  }


  /**
   * @return undef
   */
  undef getQuestionsIdFromMe()
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

  std::string userName;
  int userId;
  std::string password;
  std::string name;
  std::string email;
  int allowAnonymousQuestions;
  undef questionsIdFromMe;
  map<int, vector<int>> questionid_questionidsThread_map;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of userName
   * @param value the new value of userName
   */
  void setUserName(std::string value)
  {
    userName = value;
  }

  /**
   * Get the value of userName
   * @return the value of userName
   */
  std::string getUserName()
  {
    return userName;
  }

  /**
   * Set the value of userId
   * @param value the new value of userId
   */
  void setUserId(int value)
  {
    userId = value;
  }

  /**
   * Get the value of userId
   * @return the value of userId
   */
  int getUserId()
  {
    return userId;
  }

  /**
   * Set the value of password
   * @param value the new value of password
   */
  void setPassword(std::string value)
  {
    password = value;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  std::string getPassword()
  {
    return password;
  }

  /**
   * Set the value of name
   * @param value the new value of name
   */
  void setName(std::string value)
  {
    name = value;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  std::string getName()
  {
    return name;
  }

  /**
   * Set the value of email
   * @param value the new value of email
   */
  void setEmail(std::string value)
  {
    email = value;
  }

  /**
   * Get the value of email
   * @return the value of email
   */
  std::string getEmail()
  {
    return email;
  }

  /**
   * Set the value of allowAnonymousQuestions
   * @param value the new value of allowAnonymousQuestions
   */
  void setAllowAnonymousQuestions(int value)
  {
    allowAnonymousQuestions = value;
  }

  /**
   * Get the value of allowAnonymousQuestions
   * @return the value of allowAnonymousQuestions
   */
  int getAllowAnonymousQuestions()
  {
    return allowAnonymousQuestions;
  }

  /**
   * Set the value of questionsIdFromMe
   * @param value the new value of questionsIdFromMe
   */
  void setQuestionsIdFromMe(undef value)
  {
    questionsIdFromMe = value;
  }

  /**
   * Get the value of questionsIdFromMe
   * @return the value of questionsIdFromMe
   */
  undef getQuestionsIdFromMe()
  {
    return questionsIdFromMe;
  }

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

  void initAttributes();

};

#endif // USER_H
