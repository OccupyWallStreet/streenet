<?php
/**
 * @file
 * Display Suite article template.
 *
 * Available variables:
 * @todo populate variables
 */

  $classes .= ' equal-height-element';
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?>">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

      <?php print $contents; ?>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
