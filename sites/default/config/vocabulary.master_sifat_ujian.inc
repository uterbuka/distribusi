<?php
/**
 * @file
 * vocabulary.master_sifat_ujian.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '39',
  'name' => 'Master Sifat Ujian',
  'machine_name' => 'master_sifat_ujian',
  'description' => '',
  'hierarchy' => '0',
  'module' => 'taxonomy',
  'weight' => '0',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'skos:ConceptScheme',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'rdfs:comment',
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
