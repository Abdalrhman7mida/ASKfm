
#ifndef USERSMANAGER_H
#define USERSMANAGER_H

#include <string>


/**
  * class UsersManager
  * 
  */

class UsersManager
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  UsersManager();

  /**
   * Empty Destructor
   */
  virtual ~UsersManager();

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
   */
  void accessSystem()
  {
  }


  /**
   */
  void login()
  {
  }


  /**
   */
  void signUp()
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
   */
  void listUsersNamesIds()
  {
  }


  /**
   */
  void readUserId()
  {
  }


  /**
   * @param  user
   */
  void updateDatabase(User user)
  {
  }


  /**
   * @return User
   */
  User GetCurrentUser()
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

  map<string, User> userame_userobject_map;
  User currentUse;
  int lastId;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of userame_userobject_map
   * @param value the new value of userame_userobject_map
   */
  void setUserame_userobject_map(map<string, User> value)
  {
    userame_userobject_map = value;
  }

  /**
   * Get the value of userame_userobject_map
   * @return the value of userame_userobject_map
   */
  map<string, User> getUserame_userobject_map()
  {
    return userame_userobject_map;
  }

  /**
   * Set the value of currentUse
   * @param value the new value of currentUse
   */
  void setCurrentUse(User value)
  {
    currentUse = value;
  }

  /**
   * Get the value of currentUse
   * @return the value of currentUse
   */
  User getCurrentUse()
  {
    return currentUse;
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

  void initAttributes();

};

#endif // USERSMANAGER_H
