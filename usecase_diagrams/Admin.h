/**
 * Project Untitled
 */


#ifndef _ADMIN_H
#define _ADMIN_H

class Admin {
public: 
    
void createSurvey();
    
/**
 * @param surveyId
 */
bool deleteSurvey(int surveyId);
    
/**
 * @param surveyId
 */
void viewStatistics(int surveyId);
    
/**
 * @param id
 * @param pw
 */
bool login(string id, string pw);
    
void logout();
    
/**
 * @param title
 */
void registerSurvey(string title);
    
void listSurveys();
    
/**
 * @param surveyId
 */
void viewDetails(int surveyId);
private: 
    string adminId;
    string adminPw;
};

#endif //_ADMIN_H