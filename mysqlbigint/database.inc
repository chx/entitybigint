<?php

require_once DRUPAL_ROOT . '/includes/database/mysql/database.inc';

class DatabaseConnection_mysqlbigint extends DatabaseConnection_mysql {
  function driver() {
    return 'mysqlbigint';
  }
}
