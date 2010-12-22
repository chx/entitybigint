<?php

require_once DRUPAL_ROOT . '/includes/database/mysql/query.inc';

class InsertQuery_mysqlbigint extends InsertQuery_mysql {
  function execute() {
    $serials = variable_get('serials', array());
    if (isset($serials[$this->table])) {
      $this->insertFields[] = $serials[$this->table];
      foreach ($this->insertValues as &$insert_values) {
        $last_insert_id = $this->connection->nextId();
        $insert_values[] = $last_insert_id;
      }
    }
    $parent_last_insert_id = parent::execute();
    return isset($serials[$this->table]) ? $last_insert_id : $parent_last_insert_id;
  }
}

class TruncateQuery_mysqlbigint extends TruncateQuery_mysql {
}
