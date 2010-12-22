<?php
// $Id$

require_once DRUPAL_ROOT . '/includes/database/mysql/install.inc';

/**
 * @file
 * Installation code for MySQL embedded database engine with a single bigint serial for entities.
 */

/**
 * Specifies installation tasks for MySQL and equivalent databases.
 */
class DatabaseTasks_mysqlbigint extends DatabaseTasks_mysql {
  /**
   * Returns a human-readable name string for MySQL and equivalent databases.
   */
  public function name() {
    return st('MySQL, MariaDB, or equivalent with a single serial for entities.');
  }
}

