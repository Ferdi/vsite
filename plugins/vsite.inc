<?php

class vsite extends space_og {

//   function __construct(){
//     parent::__construct();
//   }

  function feature_options() {
    return array(0 => t('Disabled'), 1 => t('Public'), 2 => 'Private');
  }
}


