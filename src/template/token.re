type token = 
  | IlligalToken
  | EOFToken
  | NullToken
  | UndefinedToken
  | BooleanToken(bool)
  | StringToken(string)
  | IntegerLiteralToken(int)
  | FloatLiteralToken(float)
  | IdentToken(string)
  | PipeToken
  | OpenTagToken
  | CloseTagToken;
