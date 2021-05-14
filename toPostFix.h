#ifndef  TOPOSTFIX_H
#define  TOPOSTFIX_H 

#include<vector>
#include<string>
#include<iostream>

class toPostFix
{
public:
    toPostFix(const std::vector<std::string>& givenInFixExpression);

    ~toPostFix() = default;

    const std::vector<std::string>& getPostFixExpression();


private:
    std::vector<std::string> inFixExpression;

    std::vector<std::string> postFixExpression;

    std::vector<std::string> operatorStack;

    const int getOperatorPrecedance(const std::string& givenOperator);

    const bool isOperator(const std::string& givenOperator);

    const bool isFunction(const std::string& givenOperator);

};



#endif
