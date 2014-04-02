cpp-maybe
=========

Maybe types in C++!

To use them, call Just(something) or None<Type>(). It's unfortunate that you need the template parameters in None, but oh well.

To extract the value from them, you can use isNone() to check if it is fine, and then get(), however this throws an error you you attempt to get from a None. There is a safer way though - using the overloaded operator>> to extract the value into a function, returning either a None or Just(the returned function value). If you want to use a void function, you can use .call or .callElse
