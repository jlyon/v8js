/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2013 The PHP Group                                |
  +----------------------------------------------------------------------+
  | http://www.opensource.org/licenses/mit-license.php  MIT License      |
  +----------------------------------------------------------------------+
  | Author: Jani Taskinen <jani.taskinen@iki.fi>                         |
  | Author: Patrick Reilly <preilly@php.net>                             |
  +----------------------------------------------------------------------+
*/

#ifndef V8JS_V8OBJECT_CLASS_H
#define V8JS_V8OBJECT_CLASS_H

extern zend_class_entry *php_ce_v8_object;
extern zend_class_entry *php_ce_v8_function;

PHP_MINIT_FUNCTION(v8js_v8object_class);

#endif /* V8JS_V8OBJECT_CLASS_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
