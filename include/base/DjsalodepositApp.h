#ifndef DJSALODEPOSITAPP_H
#define DJSALODEPOSITAPP_H

#include "MooseApp.h"

class DjsalodepositApp;

template<>
InputParameters validParams<DjsalodepositApp>();

class DjsalodepositApp : public MooseApp
{
public:
  DjsalodepositApp(const std::string & name, InputParameters parameters);
  virtual ~DjsalodepositApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* DJSALODEPOSITAPP_H */
