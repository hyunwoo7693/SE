/**
 * Project Untitled
 */


#ifndef _MEMBER_H
#define _MEMBER_H

class Member {
public: 
    
/**
 * @param id
 * @param pw
 */
bool signUp(string id, string pw);
    
/**
 * @param id
 * @param pw
 */
bool login(string id, string pw);
    
void logout();
    
/**
 * @param keyword
 */
void searchSurvey(string keyword);
    
void respondSurvey();
    
void modifyInfo();
    
bool withdraw();
    
/**
 * @param surveyId
 */
void viewDetails(int surveyId);
    
/**
 * @param surveyId
 */
void respondSurvey(int surveyId);
    
void viewMyResponses();
    
/**
 * @param responseId
 */
bool cancelResponse(int responseId);
    
/**
 * @param surveyId
 */
void editSurvey(int surveyId);
    
void Operation1();
private: 
    string id;
    string pw;
};

#endif //_MEMBER_H